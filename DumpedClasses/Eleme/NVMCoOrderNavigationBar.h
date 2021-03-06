//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface NVMCoOrderNavigationBar : UIView
{
    _Bool _showAddIcon;
    UIButton *_addIconButton;
    CDUnknownBlockType _addButtonAction;
    UILabel *_titleLabel;
    UIView *_shrinkableContainer;
    UILabel *_descrtiptionLabel;
    UIButton *_addButton;
}

@property(nonatomic) _Bool showAddIcon; // @synthesize showAddIcon=_showAddIcon;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) UILabel *descrtiptionLabel; // @synthesize descrtiptionLabel=_descrtiptionLabel;
@property(retain, nonatomic) UIView *shrinkableContainer; // @synthesize shrinkableContainer=_shrinkableContainer;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType addButtonAction; // @synthesize addButtonAction=_addButtonAction;
@property(retain, nonatomic) UIButton *addIconButton; // @synthesize addIconButton=_addIconButton;
- (void).cxx_destruct;
- (void)updateWithOffset:(double)arg1;
- (void)hideAddIconButtonAnimated;
- (void)showAddIconButtonAnimated;
- (void)configLayout;
- (void)loadAddButton;
- (void)loadDescriptionLabel;
- (void)loadShrinkableContainer;
- (void)loadTitleLabel;
- (void)loadAddIconButton;
- (void)loadSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

