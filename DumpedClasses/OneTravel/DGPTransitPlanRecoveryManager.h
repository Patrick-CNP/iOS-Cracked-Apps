//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DGPTransitPlanRecoveryModel;

@interface DGPTransitPlanRecoveryManager : NSObject
{
    DGPTransitPlanRecoveryModel *_recoveryModel;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)solutionRecoverFilePath;
- (void)deleteRecoveryModelFromDisk;
- (id)loadRecoveryModelFromDisk;
- (void)saveRecoveryModelToDisk:(id)arg1;
- (_Bool)shouldRecovery;
@property(retain, nonatomic) DGPTransitPlanRecoveryModel *recoveryModel; // @synthesize recoveryModel=_recoveryModel;
- (_Bool)shouldRecoveryOdHomeScheme;
- (_Bool)shouldRecoveryRealtimeTransitDetailPage;
- (_Bool)shouldRecoveryRealtimeTransitPlanListPage;
- (void)clearRecoveryType:(long long)arg1;
- (_Bool)isSetRecoveryType:(long long)arg1;
- (void)setRecoveryType:(long long)arg1;
- (void)setSolutionSelectedIndex:(long long)arg1;
- (void)setCurrentVisibleState:(long long)arg1;

@end

