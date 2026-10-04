def find_next_greater_elements(arr):
    n = len(arr)
    result = []

    # Outer loop to pick each element
    for i in range(n):
        next_greater = -1
        # Inner loop to find the first greater element to the right
        for j in range(i + 1, n):
            if arr[j] > arr[i]:
                next_greater = arr[j]
                break
        result.append(str(next_greater))

    # Print the output in a comma-separated format
    print(", ".join(result))


# Driver code with Sample Test Cases
if __name__ == "__main__":
    test_cases = [
        [4, 5, 2, 25],
        [13, 7, 6, 12],
        [1, 2, 3, 4],
        [4, 3, 2, 1],
    ]

    for idx, tc in enumerate(test_cases, 1):
        print(f"Sample Test Case {idx}:")
        print(f"Input: {tc}")
        print("Output: ", end="")
        find_next_greater_elements(tc)
        print()

