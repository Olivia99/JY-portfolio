
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Wed, 10 Nov 2021 06:22:28 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorBaseWhite,
ColorBaseGrayLight,
ColorBaseGrayMedium,
ColorBaseGrayBlue,
ColorFontsPrimary,
ColorFontsSecondary,
ColorFontsTertiary
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
