# Package Sorting Assignment

## DSA Assignment

This assignment implements Merge Sort and Quick Sort in C to sort package weights received by a logistics company.

## Input Data

The package weights are:

20, 15, 20, 10, 15, 20, 25, 10

Each package has a unique package ID.

| Package ID | Weight |
|---|---:|
| P1 | 20 |
| P2 | 15 |
| P3 | 20 |
| P4 | 10 |
| P5 | 15 |
| P6 | 20 |
| P7 | 25 |
| P8 | 10 |

## Programs

### 1. Merge Sort

Merge Sort is implemented in C to sort the package weights in ascending order.

Source code:

`merge_sort.c`

### 2. Quick Sort

Quick Sort is implemented in C using the last element as the pivot.

Source code:

`quick_sort.c`

### 3. Stable Merge Sort

The Merge Sort program is modified to maintain the original relative order of packages having equal weights.

Source code:

`stable_merge_sort.c`

## Sorted Output

The sorted weights are:

10, 10, 15, 15, 20, 20, 20, 25

## Stability Verification

| Weight | Original Order | Sorted Order |
|---|---|---|
| 10 | P4, P8 | P4, P8 |
| 15 | P2, P5 | P2, P5 |
| 20 | P1, P3, P6 | P1, P3, P6 |

Therefore, the stable Merge Sort preserves the original relative order of equal-weight packages.

## Complexity Analysis

| Feature | Merge Sort | Quick Sort |
|---|---|---|
| Best Case | O(n log n) | O(n log n) |
| Average Case | O(n log n) | O(n log n) |
| Worst Case | O(n log n) | O(n²) |
| Space Complexity | O(n) | O(log n) average |
| Stability | Stable | Not stable |
| Duplicate Values | Supported | Supported |

## Conclusion

When maintaining the original order of equal-weight packages is important, stable Merge Sort is suitable because it preserves the relative order of equal elements.

## Files

- `merge_sort.c` – Merge Sort implementation
- `quick_sort.c` – Quick Sort implementation
- `stable_merge_sort.c` – Stable Merge Sort implementation
- `input.txt` – Input data
- `output.txt` – Program output
- `trace_table.docx` – Important intermediate steps
- `complexity_analysis.docx` – Complexity and comparison analysis
