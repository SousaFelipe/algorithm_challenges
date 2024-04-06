

pub struct BinRange {
  pub min: u8,
  pub max: u8
}


impl BinRange {
  
  pub fn new(min: u8, max: u8) -> BinRange {
    BinRange {
      min,
      max
    }
  }

  pub fn middle(range: &BinRange) -> u8 {
    let less_range: u8 = range.max - range.min;
    f32::from(less_range / 2).round() as u8
  }

  pub fn with_min(&self, min: u8) -> BinRange {
    BinRange {
      min,
      max: self.max
    }
  }

  pub fn with_max(&self, max: u8) -> BinRange {
    BinRange {
      min: self.min,
      max
    }
  }
}
