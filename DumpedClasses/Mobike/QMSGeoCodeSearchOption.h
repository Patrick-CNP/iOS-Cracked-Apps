//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QMSSearchOption.h"

@class NSString;

@interface QMSGeoCodeSearchOption : QMSSearchOption
{
    NSString *_address;
    NSString *_region;
}

@property(copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
- (void).cxx_destruct;

@end

