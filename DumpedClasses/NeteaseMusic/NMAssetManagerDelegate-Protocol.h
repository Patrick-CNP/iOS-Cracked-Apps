//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMAssetItem, NMAssetManager, NSString;

@protocol NMAssetManagerDelegate <NSObject>

@optional
- (void)assetManagerOpenFailed:(NMAssetManager *)arg1 userDenied:(_Bool)arg2;
- (void)assetManager:(NMAssetManager *)arg1 replaceTempAssetItem:(NSString *)arg2 withAssetItem:(NMAssetItem *)arg3;
- (void)assetManagerCurrentAssetsUpdated:(NMAssetManager *)arg1;
- (void)assetManagerCurrentGroupUpdated:(NMAssetManager *)arg1;
- (void)assetManagerSelectedAssetsUpdated:(NMAssetManager *)arg1;
- (_Bool)assetManager:(NMAssetManager *)arg1 shouldSelectedAssets:(NMAssetItem *)arg2;
@end
