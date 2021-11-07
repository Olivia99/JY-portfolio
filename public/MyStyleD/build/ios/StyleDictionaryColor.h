
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Sun, 07 Nov 2021 21:23:10 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
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
