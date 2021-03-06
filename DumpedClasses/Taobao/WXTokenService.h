//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXContextBindingObject.h"

#import "IWXTokenService.h"

@class NSString;

@interface WXTokenService : WXContextBindingObject <IWXTokenService>
{
    NSString *ssoToken;
}

@property(copy, nonatomic) NSString *ssoToken; // @synthesize ssoToken;
- (void).cxx_destruct;
- (_Bool)isNeedRequestSSOToken;
- (void)fetchTokenWithType:(int)arg1 data:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)fetchTokenWithType:(int)arg1 data:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

