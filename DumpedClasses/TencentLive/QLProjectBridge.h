//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QNBProjectBridgeDataSource.h"

@class NSString;

@interface QLProjectBridge : NSObject <QNBProjectBridgeDataSource>
{
}

+ (void)configBridgeForSubProject;
- (id)shareConfig;
- (id)playerHistoryConfig;
- (id)vipConfig;
- (id)UIStandardStyleConfig;
- (id)appConfigConfig;
- (id)loadImageConfig;
- (id)openJumpConfig;
- (id)networkConfig;
- (id)loginConfig;
- (id)dbConfig;
- (id)reportConfig;
- (id)requestConfig;
- (Class)utilsConfig;
- (id)logConfig;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

