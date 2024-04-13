use std::cmp::Ordering;



pub fn execute(unsorted: &mut Vec<u32>) {
  
  let mut sorted: Vec<u32> = Vec::new();
  let mut lss_idx: usize;
  let mut crr_val: u32;

  for i in 0..unsorted.len() {
    crr_val = unsorted[i];
    lss_idx = less_index(&sorted, crr_val);
    sort(&mut sorted, lss_idx, crr_val);
  }

  *unsorted = sorted;
}


fn sort(vector: &mut Vec<u32>, lss_idx: usize, value: u32) {
  vector.push(u32::MAX);

  for i in (lss_idx..vector.len()).into_iter().rev() {
    if i > lss_idx {
      vector[i] = vector[i - 1];
    }
  }
  
  vector[lss_idx] = value
}


fn less_index(vector: &Vec<u32>, value: u32) -> usize {
  return match vector.len().cmp(&1) {
    Ordering::Less => 0,
    _ => {
      for i in 0..vector.len() {
        if vector[i] > value {
          return i;
        }
      }
      vector.len()
    }
  }
}
