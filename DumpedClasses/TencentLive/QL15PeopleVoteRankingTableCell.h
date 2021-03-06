//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, QL15PeopleVoteStarInfo, QLSImageView, UILabel;

@interface QL15PeopleVoteRankingTableCell : UITableViewCell
{
    _Bool _isAnimate;
    NSString *_downloadAppUrl;
    NSString *_OpenAppUrl;
    long long _pos;
    QL15PeopleVoteStarInfo *_userItem;
    id <Vote15PeopleRecordDelegate> _delegate;
    UILabel *_animateLabel;
    QLSImageView *_avatarView;
}

@property(retain, nonatomic) QLSImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) _Bool isAnimate; // @synthesize isAnimate=_isAnimate;
@property(retain, nonatomic) UILabel *animateLabel; // @synthesize animateLabel=_animateLabel;
@property(nonatomic) __weak id <Vote15PeopleRecordDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QL15PeopleVoteStarInfo *userItem; // @synthesize userItem=_userItem;
@property(nonatomic) long long pos; // @synthesize pos=_pos;
@property(copy, nonatomic) NSString *OpenAppUrl; // @synthesize OpenAppUrl=_OpenAppUrl;
@property(copy, nonatomic) NSString *downloadAppUrl; // @synthesize downloadAppUrl=_downloadAppUrl;
- (void).cxx_destruct;
- (void)voteAction;
- (void)voteCommit;
- (void)voteWithAnimation;
- (void)voteBtnPress:(id)arg1;
- (id)defaultTitleForPopup;
- (void)Open15PeopleApp;
- (void)setObject:(id)arg1;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

