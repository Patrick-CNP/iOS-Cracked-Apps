//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBShopRequest.h"

@class NSDictionary, NSString;

@interface TBShopFetchMenuRequest : NSObject <TBShopRequest>
{
    NSString *_sellerId;
    NSDictionary *_bizParams;
    CDUnknownBlockType _fetchHandler;
}

@property(copy, nonatomic) CDUnknownBlockType fetchHandler; // @synthesize fetchHandler=_fetchHandler;
@property(retain, nonatomic) NSDictionary *bizParams; // @synthesize bizParams=_bizParams;
@property(retain, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
- (void).cxx_destruct;
- (id)generateMtopRequest;
@property(retain, nonatomic) NSString *apiVersion;
@property(retain, nonatomic) NSString *api;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

