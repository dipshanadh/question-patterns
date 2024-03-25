class Solution:
    def findRepeatedDnaSequences(self, s: str) -> List[str]:
        n = len(s)
        cnt = defaultdict(int)
        ans = []

        if n < 10:
            return ans

        for i in range(n - 9):
            dna = s[i:i + 10]
            cnt[dna] += 1

            if cnt[dna] == 2:
                ans.append(dna)

        return ans