fn main() {
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).ok();
    let n: usize = n.trim().parse().unwrap();

    let mut a = String::new();
    std::io::stdin().read_line(&mut a).ok();
    let a: Vec<i32> = a.split_whitespace()
        .map(|e| e.parse().unwrap()).collect();

    let mut cnt = 0;
    for i in 2..2*n {
        if a[i-2] == a[i-0] {
            cnt += 1;
        }
    }
    println!("{}", cnt);
}
