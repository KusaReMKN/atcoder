fn gcd(a: i32, b: i32) -> i32 {
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
    let mut line = String::new();
    std::io::stdin().read_line(&mut line).ok();
    let mut iter = line.split_whitespace();
    let a = iter.next().unwrap().parse::<i32>().unwrap();
    let b = iter.next().unwrap().parse::<i32>().unwrap();
    println!("{}", gcd(a, b));
}
