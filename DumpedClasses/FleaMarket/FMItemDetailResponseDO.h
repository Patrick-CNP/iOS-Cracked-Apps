//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMItemDO, NSNumber, NSString;

@interface FMItemDetailResponseDO : NSObject
{
    FMItemDO *_item;
    NSString *_serverTime;
    NSNumber *_isDeleted;
}

@property(retain, nonatomic) NSNumber *isDeleted; // @synthesize isDeleted=_isDeleted;
@property(copy, nonatomic) NSString *serverTime; // @synthesize serverTime=_serverTime;
@property(retain, nonatomic) FMItemDO *item; // @synthesize item=_item;
- (void).cxx_destruct;

@end
