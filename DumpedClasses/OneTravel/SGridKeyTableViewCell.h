//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class KeyModel_private, UILabel;

@interface SGridKeyTableViewCell : UITableViewCell
{
    KeyModel_private *_infoModel;
    CDUnknownBlockType _tableViewCellClickBlock;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType tableViewCellClickBlock; // @synthesize tableViewCellClickBlock=_tableViewCellClickBlock;
@property(retain, nonatomic) KeyModel_private *infoModel; // @synthesize infoModel=_infoModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)cellClick;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

