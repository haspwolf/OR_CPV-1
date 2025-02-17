
        EngineControllers (
		Throttle ( 0 1 0.125 0 0.
			NumNotches ( 9
				Notch ( 0       0 Dummy )
				Notch ( 0.125   0 Dummy )
				Notch ( 0.25    0 Dummy )
				Notch ( 0.375   0 Dummy )
				Notch ( 0.5     0 Dummy )
				Notch ( 0.625   0 Dummy )
				Notch ( 0.75    0 Dummy )
				Notch ( 0.875   0 Dummy )
				Notch ( 1       0 Dummy )
			)
		)
		Brake_Train ( 0 1 0.025 1
			NumNotches ( 3
				Notch ( 0.0  0 TrainBrakesControllerReleaseStart )
				Notch ( 0.1  1 TrainBrakesControllerContinuousServiceStart )
				Notch ( 1.0  0 TrainBrakesControllerFullServiceStart )
			)
		)
		Brake_Engine ( 0 1 0.025 0.5
			NumNotches ( 3
				Notch( 0.0 0 EngineBrakesControllerReleaseStart )
				Notch( 0.1 1 EngineBrakesControllerContinuousServiceStart )
				Notch( 1.0 0 EngineBrakesControllerFullServiceStart )
			)
		)
		Brake_Hand ( 0 1 0.0125 0 
			NumNotches( 0 ) 
		)
		DirControl ( -1 0 1 1 )
		EmergencyStopResetToggle( 0 1 0 )
		EmergencyStopToggle( 0 1 0 )
		BellToggle( 0 1 0 )
		Sanding ( 0 1 0 )
		Wipers ( 0 1 0 )
		Vigilance ( 0 1 0 )
		Horn ( 0 1 0 )
		AWS ( 0 1 0 )
		Headlights ( 0 0.25 1 0 )
		CABToggle ( 0 1 0 )
		BailOffButton( 0 1 0 )
		ORTSOvercharge ( 0 1 0 )
	)
	