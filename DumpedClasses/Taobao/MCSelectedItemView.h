//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIImageView;

@interface MCSelectedItemView : UIView <UIGestureRecognizerDelegate>
{
    id <MCSelectedItemViewDelegate> _delegate;
    NSString *_identifier;
    UIImageView *_avatarImageView;
    double _messageAvatarViewWidth;
    NSString *_imageUrl;
}

@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) double messageAvatarViewWidth; // @synthesize messageAvatarViewWidth=_messageAvatarViewWidth;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <MCSelectedItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadContent;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleSingleTap:(id)arg1;
- (id)initWithIdentifier:(id)arg1 itemUrl:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
