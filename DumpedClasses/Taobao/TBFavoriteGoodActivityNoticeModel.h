//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor;

@interface TBFavoriteGoodActivityNoticeModel : NSObject
{
    NSString *_title;
    NSString *_contentURL;
    UIColor *_textColor;
    UIColor *_backgroundColor;
    long long _version;
    long long _textColorValue;
    long long _backgroundColorValue;
}

+ (long long)tbfavorite_integerValueFromHexString:(id)arg1;
+ (id)modelFromOrange;
@property(nonatomic) long long backgroundColorValue; // @synthesize backgroundColorValue=_backgroundColorValue;
@property(nonatomic) long long textColorValue; // @synthesize textColorValue=_textColorValue;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *contentURL; // @synthesize contentURL=_contentURL;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)updateLocalVersion;
- (unsigned long long)currentLocalVersion;
- (_Bool)isDataValid;
- (_Bool)shouldAppearBanner;

@end
