#!/usr/bin/pytho3
#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: Double pointer to the head of the list
 *
 * Return: Pointer to the new head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL, *next = NULL;

    while (*head)
    {
        next = (*head)->next;
        (*head)->next = prev;
        prev = *head;
        *head = next;
    }

    return (prev);
}

/**
 * is_palindrome - Checks if a singly linked list is a palindrome
 * @head: Double pointer to the head of the list
 *
 * Return: 1 if the list is a palindrome, 0 otherwise
 */
int is_palindrome(listint_t **head)
{
    listint_t *slow = *head, *fast = *head;
    listint_t *prev_slow = *head, *second_half = NULL;
    listint_t *mid_node = NULL;
    int palindrome = 1; /* Assume palindrome initially */

    if (*head == NULL || (*head)->next == NULL)
        return (palindrome);

    /* Use slow and fast pointers to find the middle of the list */
    while (fast && fast->next)
    {
        fast = fast->next->next;
        prev_slow = slow;
        slow = slow->next;
    }

    /* Handle odd length lists */
    if (fast)
    {
        mid_node = slow;
        slow = slow->next;
    }

    /* Reverse the second half of the list */
    second_half = reverse_listint(&slow);

    /* Compare first half and reversed second half */
    while (second_half)
    {
        if (second_half->n != prev_slow->n)
        {
            palindrome = 0;
            break;
        }
        second_half = second_half->next;
        prev_slow = prev_slow->next;
    }

    /* Restore the original list */
    second_half = reverse_listint(&slow);

    /* If there was a mid node, reconnect the list */
    if (mid_node)
    {
        prev_slow->next = mid_node;
        mid_node->next = second_half;
    }
    else
        prev_slow->next = second_half;

    return (palindrome);
}

