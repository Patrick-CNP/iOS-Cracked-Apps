//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DiDiBoardingPOIEntityModel, SCAirportObserverStore;

@protocol SCAirportObserverStoreDelegate <NSObject>
- (void)SAirObserverStore:(SCAirportObserverStore *)arg1 didChangeonPosition:(DiDiBoardingPOIEntityModel *)arg2;
- (void)SAirObserverStoreDidEnterBackground:(SCAirportObserverStore *)arg1;
- (void)SAirObserverStoreDidLogout:(SCAirportObserverStore *)arg1;
- (void)SAirObserverStoreDidLogin:(SCAirportObserverStore *)arg1;
@end

