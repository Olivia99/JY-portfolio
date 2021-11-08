
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Mon, 08 Nov 2021 00:54:40 GMT


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
