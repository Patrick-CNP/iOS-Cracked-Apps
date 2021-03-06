//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSString;

@interface APMergableRpcOP : NSObject
{
    NSString *_key;
    NSDate *_createDate;
    NSDictionary *_rpcParams;
    double _timeOutValue;
    CDUnknownBlockType _resultCallback;
}

@property(copy, nonatomic) CDUnknownBlockType resultCallback; // @synthesize resultCallback=_resultCallback;
@property(nonatomic) double timeOutValue; // @synthesize timeOutValue=_timeOutValue;
@property(retain, nonatomic) NSDictionary *rpcParams; // @synthesize rpcParams=_rpcParams;
@property(retain, nonatomic) NSDate *createDate; // @synthesize createDate=_createDate;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (_Bool)isTimeOut;
- (id)init;

@end

