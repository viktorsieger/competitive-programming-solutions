use std::io::{self, BufRead};

fn main() {

    let stdin = io::stdin();
    let mut iterator = stdin.lock().lines();

    iterator.next();

    let mut food_days = Vec::new();

    for line in iterator.map(|x| x.unwrap()) {

        let event: Vec<&str> = line.split_whitespace().collect();

        let s: i32 = String::from(event[0]).parse().unwrap();
        let t: i32 = String::from(event[1]).parse().unwrap();

        for day in s..(t + 1) {
            if !food_days.contains(&day) {
                food_days.push(day);
            }
        }
    }

    println!("{}", food_days.len());
}
