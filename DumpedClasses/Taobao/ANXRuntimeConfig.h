//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface ANXRuntimeConfig : NSObject
{
    NSString *_isTrojan;
    NSString *_isPrisonBreak;
    NSString *_currentOperateMobile;
    NSString *_alipayUserId;
    NSString *_havanaID;
    NSString *_appKey;
    NSString *_insidePushKey;
    NSString *_dynamicId;
    NSArray *_dynamicIds;
    NSString *_sid;
    NSString *_appName;
    NSString *_currentView;
    NSString *_bussinessID;
}

@property(copy, nonatomic) NSString *bussinessID; // @synthesize bussinessID=_bussinessID;
@property(copy, nonatomic) NSString *currentView; // @synthesize currentView=_currentView;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(copy, nonatomic) NSArray *dynamicIds; // @synthesize dynamicIds=_dynamicIds;
@property(copy, nonatomic) NSString *dynamicId; // @synthesize dynamicId=_dynamicId;
@property(copy, nonatomic) NSString *insidePushKey; // @synthesize insidePushKey=_insidePushKey;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(copy, nonatomic) NSString *havanaID; // @synthesize havanaID=_havanaID;
@property(copy, nonatomic) NSString *alipayUserId; // @synthesize alipayUserId=_alipayUserId;
@property(copy, nonatomic) NSString *currentOperateMobile; // @synthesize currentOperateMobile=_currentOperateMobile;
@property(copy, nonatomic) NSString *isPrisonBreak; // @synthesize isPrisonBreak=_isPrisonBreak;
@property(copy, nonatomic) NSString *isTrojan; // @synthesize isTrojan=_isTrojan;
- (void).cxx_destruct;
- (void)clearRuntimeConfig;

@end
