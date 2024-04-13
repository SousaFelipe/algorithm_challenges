


pub fn execute(vector: &mut Vec<u32>) {
  
  let mut _minimum: usize = 0;

  for n in 0..vector.len() {
    _minimum = minimum_of(vector, n);
    swap(vector, _minimum, n);
  }
}


fn minimum_of(vector: &Vec<u32>, starts_in: usize) -> usize {

  let mut min_value: u32 = vector[starts_in];
  let mut min_index: usize = starts_in;

  for n in (min_index + 1)..vector.len() {
    if vector[n] < min_value {
      min_value = vector[n];
      min_index = n;
    }
  }

  min_index
}


pub fn swap(vector: &mut Vec<u32>, swap_index: usize, new_index: usize) {
  let tmp_value: u32 = vector[swap_index];
  vector[swap_index] = vector[new_index];
  vector[new_index] = tmp_value;
}
