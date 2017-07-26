//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QZVideoReportManagerHelperProtocol.h"

@class NSString;

@interface QZVideoReportHelper : NSObject <QZVideoReportManagerHelperProtocol>
{
}

+ (void)reportTo321Table:(id)arg1 firstAction:(long long)arg2 secondAction:(long long)arg3 thirdAction:(long long)arg4;
+ (void)initVideoReport;
- (id)environmentInfo;
- (void)rdmReportWithEvent:(id)arg1 isSucceed:(_Bool)arg2 elapse:(long long)arg3 size:(long long)arg4 params:(id)arg5 reportImmediately:(_Bool)arg6;
- (void)reportToHabo:(id)arg1 ip:(id)arg2 port:(int)arg3 ret:(int)arg4 tmcost:(int)arg5;
- (void)reportTo321TableFirstAction:(long long)arg1 secondAction:(long long)arg2 thirdAction:(long long)arg3 extInfo:(id)arg4;
- (void)reportToLuopan:(id)arg1 extInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

