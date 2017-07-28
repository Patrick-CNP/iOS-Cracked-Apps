//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DDIMMessageContModel.h"

@class DDIMMessageContBlock, NSAttributedString, NSNumber, NSString;

@interface DDIMMessageOrderStatusChangeV2Cont : DDIMMessageContModel
{
    int _formatType;
    NSNumber *_oid;
    NSNumber *_status;
    NSNumber *_toUid;
    NSNumber *_peerUid;
    DDIMMessageContBlock *_contBlock;
    NSString *_title;
    NSString *_icon;
    NSString *_tcolor;
    NSString *_anchorText;
    NSString *_link;
    long long _linkType;
    NSNumber *_toUserRole;
    NSAttributedString *_fromString;
    NSAttributedString *_toString;
    NSAttributedString *_textString;
    double _messageTotalHeight;
    double _messageTextHeight;
    double _titleTextHeight;
}

@property(nonatomic) double titleTextHeight; // @synthesize titleTextHeight=_titleTextHeight;
@property(nonatomic) double messageTextHeight; // @synthesize messageTextHeight=_messageTextHeight;
@property(nonatomic) double messageTotalHeight; // @synthesize messageTotalHeight=_messageTotalHeight;
@property(copy, nonatomic) NSAttributedString *textString; // @synthesize textString=_textString;
@property(copy, nonatomic) NSAttributedString *toString; // @synthesize toString=_toString;
@property(copy, nonatomic) NSAttributedString *fromString; // @synthesize fromString=_fromString;
@property(copy, nonatomic) NSNumber *toUserRole; // @synthesize toUserRole=_toUserRole;
@property(nonatomic) long long linkType; // @synthesize linkType=_linkType;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(copy, nonatomic) NSString *anchorText; // @synthesize anchorText=_anchorText;
@property(copy, nonatomic) NSString *tcolor; // @synthesize tcolor=_tcolor;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int formatType; // @synthesize formatType=_formatType;
@property(copy, nonatomic) DDIMMessageContBlock *contBlock; // @synthesize contBlock=_contBlock;
@property(copy, nonatomic) NSNumber *peerUid; // @synthesize peerUid=_peerUid;
@property(copy, nonatomic) NSNumber *toUid; // @synthesize toUid=_toUid;
@property(copy, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(copy, nonatomic) NSNumber *oid; // @synthesize oid=_oid;
- (void).cxx_destruct;
- (_Bool)isShowAnchor;
- (_Bool)isShowTitleImage;
- (_Bool)isShowTitle;
- (double)messageContentWidth;
- (id)initWithSystemHelperInfo:(id)arg1;

@end
