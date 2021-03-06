//
//  ViewController.h
//  TrimTheTree
//
//  Created by T. Andrew Binkowski on 11/10/12.
//  Copyright (c) 2012 T. Andrew Binkowski. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIGestureRecognizerDelegate,
                                                UIActionSheetDelegate,
                                                UIImagePickerControllerDelegate,
                                                UINavigationControllerDelegate>

- (IBAction)tapToAddOrnament:(UITapGestureRecognizer *)sender;
- (IBAction)tapInfoButton:(UIButton *)sender;
- (IBAction)showImagePickerForCustomOrnament:(UIButton *)sender;

@end