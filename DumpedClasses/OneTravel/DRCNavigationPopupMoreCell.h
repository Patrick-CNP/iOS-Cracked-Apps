//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface DRCNavigationPopupMoreCell : UITableViewCell
{
    _Bool _hideLine;
    UIView *_containerView;
    UIImageView *_iconImageView;
    UILabel *_menuTextLabel;
    UIView *_separateLine;
}

@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UILabel *menuTextLabel; // @synthesize menuTextLabel=_menuTextLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool hideLine; // @synthesize hideLine=_hideLine;
- (void).cxx_destruct;
- (void)configureImage:(id)arg1 text:(id)arg2;
- (void)layout;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

