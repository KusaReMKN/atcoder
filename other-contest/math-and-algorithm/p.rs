fn gcd(a: i64, b: i64) -> i64 {
    let mut n = a;
    let mut m = b;

    while {
        let k = n % m;
        n = m;
        m = k;
        k != 0
    } {}

    n
}

fn main() {
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).ok();
    let n = n.trim().parse::<i32>().unwrap();
    let mut a = String::new();
    std::io::stdin().read_line(&mut a).ok();
    let a: Vec<i64> = a.split_whitespace()
        .map(|e| e.parse().unwrap()).collect();
    let c = a.iter().fold(a[0], |n, &m| gcd(n, m));
    println!("{}", c);
}
