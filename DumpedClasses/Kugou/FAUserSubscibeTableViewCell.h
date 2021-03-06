//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class FAUserLiveItemEntity, UIButton, UIImageView, UILabel, UIView;

@interface FAUserSubscibeTableViewCell : UITableViewCell
{
    _Bool _isEdit;
    _Bool _isCheck;
    long long _index;
    CDUnknownBlockType _CheckHandler;
    UIImageView *_userImageView;
    UILabel *_userNameLabel;
    UIImageView *_userStarLevelImageView;
    UIImageView *_userRichLevelImageView;
    UIView *_cellBgView;
    UIButton *_checkBtn;
    UIButton *_liveingView;
    UILabel *_lastTimeLab;
    FAUserLiveItemEntity *_liveItemEntity;
}

@property(retain, nonatomic) FAUserLiveItemEntity *liveItemEntity; // @synthesize liveItemEntity=_liveItemEntity;
@property(retain, nonatomic) UILabel *lastTimeLab; // @synthesize lastTimeLab=_lastTimeLab;
@property(retain, nonatomic) UIButton *liveingView; // @synthesize liveingView=_liveingView;
@property(retain, nonatomic) UIButton *checkBtn; // @synthesize checkBtn=_checkBtn;
@property(retain, nonatomic) UIView *cellBgView; // @synthesize cellBgView=_cellBgView;
@property(retain, nonatomic) UIImageView *userRichLevelImageView; // @synthesize userRichLevelImageView=_userRichLevelImageView;
@property(retain, nonatomic) UIImageView *userStarLevelImageView; // @synthesize userStarLevelImageView=_userStarLevelImageView;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *userImageView; // @synthesize userImageView=_userImageView;
@property(copy, nonatomic) CDUnknownBlockType CheckHandler; // @synthesize CheckHandler=_CheckHandler;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) _Bool isCheck; // @synthesize isCheck=_isCheck;
@property(nonatomic) _Bool isEdit; // @synthesize isEdit=_isEdit;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)reloadInfoWithModel:(id)arg1;
- (void)checkBtnClick:(id)arg1;
- (void)layoutSubviews;
- (void)configSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

@end

