import heapq

def generate_hamming(limit):
    hamming = []
    seen = set()
    heap = [1]

    while heap:
        x = heapq.heappop(heap)
        if x > limit:
            break
        if x not in seen:
            seen.add(x)
            hamming.append(x)
            heapq.heappush(heap, x * 2)
            heapq.heappush(heap, x * 3)
            heapq.heappush(heap, x * 5)

    return hamming

H = generate_hamming(10**18)
pos = {num: idx + 1 for idx, num in enumerate(H)}  # Map để tra vị trí nhanh

for _ in range(int(input())):
    n = int(input())
    if n in pos:
        print(pos[n])
    else:
        print("Not in sequence")
