//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBMockLoginServiceProtocol.h"

@class NSString, TBMockLoginService;

@interface TBMockLoginPublicService : NSObject <TBMockLoginServiceProtocol>
{
    TBMockLoginService *_mockLoginService;
}

@property(retain, nonatomic) TBMockLoginService *mockLoginService; // @synthesize mockLoginService=_mockLoginService;
- (void).cxx_destruct;
- (void)mockLoginForNick:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

