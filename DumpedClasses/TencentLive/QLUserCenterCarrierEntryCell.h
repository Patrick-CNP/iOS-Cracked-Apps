//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLUserCenterItemCell.h"

@class QLJCEDynamicItemInfo, UIImageView;

@interface QLUserCenterCarrierEntryCell : QLUserCenterItemCell
{
    UIImageView *_unicomNewImgView;
    QLJCEDynamicItemInfo *_replaceInfo;
}

@property(retain, nonatomic) QLJCEDynamicItemInfo *replaceInfo; // @synthesize replaceInfo=_replaceInfo;
- (void).cxx_destruct;
- (id)modelSubTitle;
- (id)modelTitle;
- (id)modelHeaderImage;
- (void)layoutSubviews;
- (_Bool)checkCellRedPoint:(id)arg1;
- (void)refreshRedDot;
- (void)refreshInterfaceUI;
- (void)updateVersion:(id)arg1;
- (void)didSelectCell;
- (void)refreshCarrierState:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

