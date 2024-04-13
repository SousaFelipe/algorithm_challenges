


pub fn execute(vector: &mut Vec<u32>) {

  let limit: usize = vector.len();

  for _ in 0..limit {
    for c in 0..limit {

      if (c + 1) == limit {
        break;
      }

      if vector[c] > vector[c + 1] {
        let temp = vector[c];

        vector[c] = vector[c + 1];
        vector[c + 1] = temp;
      }
    }
  }
}
