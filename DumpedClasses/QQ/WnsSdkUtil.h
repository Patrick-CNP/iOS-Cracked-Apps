//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WnsSdkUtil : NSObject
{
}

+ (id)sharedInstance;
- (_Bool)hanldeExtraBuf:(id)arg1;
- (id)unpackWnsPacket:(id)arg1;
- (id)packWnsPacket:(long long)arg1 cmd:(id)arg2 data:(id)arg3 compress:(_Bool)arg4 appId:(int)arg5 qua:(id)arg6 deviceInfo:(id)arg7 retryInfo:(id)arg8 requestID:(long long)arg9 extra:(id)arg10;
- (id)packWnsPacket:(long long)arg1 cmd:(id)arg2 data:(id)arg3 compress:(_Bool)arg4 appId:(int)arg5 qua:(id)arg6 deviceInfo:(id)arg7 retryInfo:(id)arg8 requestID:(long long)arg9;

@end

