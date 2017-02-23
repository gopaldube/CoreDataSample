//
//  AppDelegate.h
//  CoreDataSample
//
//  Created by Gopal on 24/02/17.
//  Copyright © 2017 Gopal. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

