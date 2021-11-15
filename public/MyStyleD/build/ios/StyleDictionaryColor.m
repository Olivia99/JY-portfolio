
//
// StyleDictionaryColor.m
//

// Do not edit directly
// Generated on Sun, 14 Nov 2021 20:28:49 GMT


#import "StyleDictionaryColor.h"

@implementation StyleDictionaryColor

+ (UIColor *)color:(StyleDictionaryColorName)colorEnum{
  return [[self values] objectAtIndex:colorEnum];
}

+ (NSArray *)values {
  static NSArray* colorArray;
  static dispatch_once_t onceToken;

  dispatch_once(&onceToken, ^{
    colorArray = @[
[UIColor colorWithRed:1.000f green:1.000f blue:1.000f alpha:1.000f],
[UIColor colorWithRed:0.965f green:0.965f blue:0.965f alpha:1.000f],
[UIColor colorWithRed:0.929f green:0.929f blue:0.929f alpha:1.000f],
[UIColor colorWithRed:0.925f green:0.937f blue:0.945f alpha:1.000f],
[UIColor colorWithRed:0.196f green:0.196f blue:0.208f alpha:1.000f],
[UIColor colorWithRed:0.369f green:0.369f blue:0.388f alpha:1.000f],
[UIColor colorWithRed:0.549f green:0.549f blue:0.549f alpha:1.000f],
[UIColor colorWithRed:0.035f green:0.427f blue:0.851f alpha:1.000f],
[UIColor colorWithRed:0.502f green:0.459f blue:1.000f alpha:1.000f],
[UIColor colorWithRed:0.678f green:0.945f blue:0.878f alpha:1.000f]
    ];
  });

  return colorArray;
}

@end
