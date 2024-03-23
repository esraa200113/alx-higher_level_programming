#!/usr/bin/python3
#include <stdlib.h>

/* Definition of the singly linked list node */
typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

/* Function to reverse a linked list */
listint_t *reverse(listint_t *head) {
    listint_t *prev = NULL;
    listint_t *current = head;
    listint_t *next = NULL;
    
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    return prev;
}

/* Function to compare two linked lists */
int compare_lists(listint_t *list1, listint_t *list2) {
    while (list1 != NULL && list2 != NULL) {
        if (list1->n != list2->n) {
            return 0; /* Not a palindrome */
        }
        list1 = list1->next;
        list2 = list2->next;
    }
    
    /* If both lists are exhausted simultaneously, they are equal */
    if (list1 == NULL && list2 == NULL) {
        return 1; /* Palindrome */
    } else {
        return 0; /* Not a palindrome */
    }
}

/* Function to check if a singly linked list is a palindrome */
int is_palindrome(listint_t **head) {
    listint_t *slow = *head;
    listint_t *fast = *head;
    listint_t *prev_slow = *head;
    listint_t *second_half = NULL;
    listint_t *mid_node = NULL;
    int result = 1; /* Assume palindrome initially */
    
    if (*head != NULL && (*head)->next != NULL) {
        /* Use slow and fast pointers to find the middle of the list */
        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            prev_slow = slow;
            slow = slow->next;
        }
        
        /* Handle odd length lists */
        if (fast != NULL) {
            mid_node = slow;
            slow = slow->next;
        }
        
        /* Reverse the second half of the list */
        second_half = reverse(slow);
        
        /* Compare first half and reversed second half */
        result = compare_lists(*head, second_half);
        
        /* Restore the original list */
        second_half = reverse(second_half);
        
        /* If there was a mid node, reconnect the list */
        if (mid_node != NULL) {
            prev_slow->next = mid_node;
            mid_node->next = second_half;
        } else {
            prev_slow->next = second_half;
        }
    }
    
    return result;
}

