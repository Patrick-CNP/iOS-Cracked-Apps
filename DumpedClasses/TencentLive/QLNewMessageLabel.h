//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, QLSImageView, UIButton, UIImageView;

@interface QLNewMessageLabel : UIView
{
    NSString *_title;
    UIImageView *_arrowView;
    NSString *_imgUrl;
    NSString *_msgCount;
    UIButton *_msgBtn;
    UIImageView *_msgBgView;
    QLSImageView *_headerView;
    id _delegate;
}

@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QLSImageView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIImageView *msgBgView; // @synthesize msgBgView=_msgBgView;
@property(retain, nonatomic) UIButton *msgBtn; // @synthesize msgBtn=_msgBtn;
- (void).cxx_destruct;
- (void)didTapNewMsgPromptLabel:(id)arg1;
- (void)layoutSubviews;
- (void)setUnreadMsgcount:(unsigned long long)arg1 userImageUrl:(id)arg2;
- (void)setMsgTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
