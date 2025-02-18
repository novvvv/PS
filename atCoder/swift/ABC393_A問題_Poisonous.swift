import Swift;

var strArr = readLine()!.split(separator: " ")

if strArr[0] == "sick" && strArr[1] == "sick" {
    print(1)
}
else if strArr[0] == "sick" && strArr[1] == "fine" {
    print(2)
}
else if strArr[0] == "fine" && strArr[1] == "sick" {
    print(3)
}
else {
    print(4)
}
