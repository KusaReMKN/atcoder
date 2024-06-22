use std::collections::HashMap;
use itertools::Itertools;

fn binom(n: i64, k:i64) -> i64 {
    (0..n+1).rev().zip(1..k+1).fold(1, |mut r, (n, d)| { r *= n; r /= d; r })
}

fn main() {
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).ok();
    let n: i32 = n.trim().parse().unwrap();

    let mut a = String::new();
    std::io::stdin().read_line(&mut a).ok();
    let a: Vec<i32> = a.split_whitespace()
        .map(|e| e.parse().unwrap()).collect();

    let mut map = HashMap::new();
    for e in a.iter() {
        let c = map.entry(e).or_insert(0);
        *c += 1;
    }

    let cnt: i64 = map.iter().map(|(_, &v)| binom(v, 2)).sum();
    println!("{}", cnt);
}
