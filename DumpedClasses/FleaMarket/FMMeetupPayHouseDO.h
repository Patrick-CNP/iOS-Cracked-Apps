//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray<FMMeetupPayHouseSpusDO>, NSString;

@interface FMMeetupPayHouseDO : NSObject
{
    NSString *_title;
    NSString *_subTitle;
    NSString *_payAmount;
    NSArray<FMMeetupPayHouseSpusDO> *_spus;
}

@property(retain, nonatomic) NSArray<FMMeetupPayHouseSpusDO> *spus; // @synthesize spus=_spus;
@property(copy, nonatomic) NSString *payAmount; // @synthesize payAmount=_payAmount;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

