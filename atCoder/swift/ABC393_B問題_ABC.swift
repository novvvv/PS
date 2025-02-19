import Swift;

let s = readLine()!
var ans = 0

for i in 0..<s.count {
    for j in (i+1)..<s.count {
        for k in (j+1)..<s.count {
            if (j - i) == (k - j) &&
                s[s.index(s.startIndex, offsetBy: i)] == "A" &&
                s[s.index(s.startIndex, offsetBy: j)] == "B" &&
                s[s.index(s.startIndex, offsetBy: k)] == "C" {
                ans += 1
            }
        }
    }
}

print(ans)
