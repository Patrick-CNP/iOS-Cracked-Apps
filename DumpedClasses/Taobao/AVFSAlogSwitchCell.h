//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AVFSAlogBasicCell.h"

@class UISwitch;

@interface AVFSAlogSwitchCell : AVFSAlogBasicCell
{
    UISwitch *_switchBtn;
    CDUnknownBlockType _switchBlock;
}

@property(copy, nonatomic) CDUnknownBlockType switchBlock; // @synthesize switchBlock=_switchBlock;
@property(retain, nonatomic) UISwitch *switchBtn; // @synthesize switchBtn=_switchBtn;
- (void).cxx_destruct;
- (void)switchBtnChanged:(id)arg1;
- (void)bindData:(id)arg1 debug:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithIdentifier:(id)arg1;

@end

