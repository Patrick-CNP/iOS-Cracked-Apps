//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CTExecutors : NSObject
{
}

+ (int)handleErrorCodeFromServerEnum:(int)arg1;
+ (void)handleReturnMsgByResponseEntity:(id)arg1 task:(id)arg2;
+ (id)serializeResponseWithBeanClass:(Class)arg1 task:(id)arg2;
+ (id)serializeRequestWithTask:(id)arg1;
+ (void)resendTaskByShortConn:(id)arg1;
+ (void)doServiceByShortConn:(id)arg1;
+ (void)doServiceByKeepAliveConn:(id)arg1;
+ (void)refreshClientIDIfNeed;
+ (id)doServiceByRequestEntity:(id)arg1 BusinessBeanClass:(Class)arg2;

@end
