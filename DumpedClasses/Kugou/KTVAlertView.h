//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIColor, UILabel;

@interface KTVAlertView : UIView
{
    UIColor *_messageColor;
    UIColor *_buttonTitleColor;
    UIColor *_buttonHightedColor;
    id <KTVAlertViewDelegate> _delegate;
    UILabel *_m_messageLabel;
    UIButton *_m_confirmBtn;
    UIButton *_m_cancelBtn;
}

@property(retain, nonatomic) UIButton *m_cancelBtn; // @synthesize m_cancelBtn=_m_cancelBtn;
@property(retain, nonatomic) UIButton *m_confirmBtn; // @synthesize m_confirmBtn=_m_confirmBtn;
@property(retain, nonatomic) UILabel *m_messageLabel; // @synthesize m_messageLabel=_m_messageLabel;
@property(nonatomic) __weak id <KTVAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *buttonHightedColor; // @synthesize buttonHightedColor=_buttonHightedColor;
@property(retain, nonatomic) UIColor *buttonTitleColor; // @synthesize buttonTitleColor=_buttonTitleColor;
@property(retain, nonatomic) UIColor *messageColor; // @synthesize messageColor=_messageColor;
- (void).cxx_destruct;
- (void)closeView;
- (void)actionConfirm:(id)arg1;
- (void)actionCancel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 message:(id)arg2 delegate:(id)arg3 confirmButtonTitle:(id)arg4 cancelButtonTitle:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

@end

