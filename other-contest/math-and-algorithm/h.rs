fn main() {
    let mut line = String::new();
    std::io::stdin().read_line(&mut line).ok();
    let mut iter = line.split_whitespace();
    let n = iter.next().unwrap().parse::<i32>().unwrap();
    let s = iter.next().unwrap().parse::<i32>().unwrap();
    let mut cnt: i32 = 0;
    for i in 1..n+1 {
        for j in 1..n+1 {
            if i + j > s {
                break;
            }
            cnt += 1;
        }
    }
    println!("{}", cnt);
}
