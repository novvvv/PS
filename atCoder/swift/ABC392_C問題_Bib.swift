import Swift;

var n = Int(readLine()!)!

var p = [Int](repeating: 0, count: 300001)
var q = [Int](repeating: 0, count: 300001)

let pInput = readLine()!.split(separator: " ").map { Int($0)! }
let qInput = readLine()!.split(separator: " ").map { Int($0)! }

for i in 1...n {
    p[i] = pInput[i - 1]
    q[i] = qInput[i - 1]
}

var people: [Int: Int] = [:]
for i in 1...n {
    people[q[i]] = i;
}

for i in 1...n {
    print(q[p[people[i]!]], terminator: " ")
}
print()

