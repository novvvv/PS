import Swift;

// readLine()은 사용자가 입력하지 않았거나, 잘못된 입력인 경우 nil을 반환한다.
// let input = readLine() type String?

var input = readLine()!.split(separator: " ")
var a = Int(input[0])!
var b = Int(input[1])!

var arr: [Int] = Array(repeating: 0, count: 1001)
let input_data = readLine()!.split(separator: " ").map { Int($0)! }
for i in 0..<b{
    let data = input_data[i]
    arr[data] = 1
}

print (a - b)
for i in 1..<a+1 {
    if arr[i] != 1 {
        print(i, terminator: " ")
    }
}
print()
